inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 25, 3 }));
  set_short( "Corridor - x49y25z3" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y26z3.c",
  "south" : DIR+"/rooms/x49y24z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
