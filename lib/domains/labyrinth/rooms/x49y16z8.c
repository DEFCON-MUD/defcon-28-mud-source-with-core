inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 8 }));
  set_short( "Hallway - x49y16z8" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y17z8.c",
  "south" : DIR+"/rooms/x49y15z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
