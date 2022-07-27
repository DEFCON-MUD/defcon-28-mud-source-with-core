inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 56, 6 }));
  set_short( "Passage - x47y56z6" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y56z6.c",
  "east" : DIR+"/rooms/x48y56z6.c",
  "south" : DIR+"/rooms/x47y55z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
