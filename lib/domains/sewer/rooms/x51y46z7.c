inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 46, 7 }));
  set_short( "Passage - x51y46z7" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y46z7.c",
  "south" : DIR+"/rooms/x51y45z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
