inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 14, 7 }));
  set_short( "Passage - x43y14z7" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y14z7.c",
  "south" : DIR+"/rooms/x43y13z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
