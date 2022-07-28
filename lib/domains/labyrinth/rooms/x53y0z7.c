inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 0, 7 }));
  set_short( "Hallway - x53y0z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y0z7.c",
  "east" : DIR+"/rooms/x54y0z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
