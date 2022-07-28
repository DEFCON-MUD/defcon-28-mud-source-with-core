inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 17, 9 }));
  set_short( "Hallway - x55y17z9" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y18z9.c",
  "south" : DIR+"/rooms/x55y16z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
