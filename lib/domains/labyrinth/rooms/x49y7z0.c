inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 7, 0 }));
  set_short( "Hallway - x49y7z0" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y8z0.c",
  "south" : DIR+"/rooms/x49y6z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
