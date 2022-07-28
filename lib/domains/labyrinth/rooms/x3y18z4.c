inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 18, 4 }));
  set_short( "Corridor - x3y18z4" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y19z4.c",
  "south" : DIR+"/rooms/x3y17z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
