inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 15, 9 }));
  set_short( "Corridor - x5y15z9" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y16z9.c",
  "south" : DIR+"/rooms/x5y14z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
