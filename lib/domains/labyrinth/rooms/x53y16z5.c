inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 16, 5 }));
  set_short( "Hallway - x53y16z5" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y17z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north.%^RESET%^");
}
