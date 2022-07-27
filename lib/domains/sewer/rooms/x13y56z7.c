inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 56, 7 }));
  set_short( "Hallway - x13y56z7" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y56z7.c",
  "south" : DIR+"/rooms/x13y55z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
