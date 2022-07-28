inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 17, 6 }));
  set_short( "Passage - x43y17z6" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y18z6.c",
  "south" : DIR+"/rooms/x43y16z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
