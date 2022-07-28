inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 50, 4 }));
  set_short( "Passage - x8y50z4" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y50z4.c",
  "east" : DIR+"/rooms/x9y50z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
