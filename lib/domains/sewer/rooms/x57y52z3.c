inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 52, 3 }));
  set_short( "Hallway - x57y52z3" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y53z3.c",
  "south" : DIR+"/rooms/x57y51z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
