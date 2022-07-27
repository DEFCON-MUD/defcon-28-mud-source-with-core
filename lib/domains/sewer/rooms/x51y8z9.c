inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 8, 9 }));
  set_short( "Passage - x51y8z9" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y8z9.c",
  "north" : DIR+"/rooms/x51y9z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
