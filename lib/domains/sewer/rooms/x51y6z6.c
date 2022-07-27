inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 6 }));
  set_short( "Hallway - x51y6z6" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y7z6.c",
  "south" : DIR+"/rooms/x51y5z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
