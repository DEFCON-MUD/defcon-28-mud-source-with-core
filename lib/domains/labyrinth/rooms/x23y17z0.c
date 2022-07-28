inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 17, 0 }));
  set_short( "Corridor - x23y17z0" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y18z0.c",
  "south" : DIR+"/rooms/x23y16z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
