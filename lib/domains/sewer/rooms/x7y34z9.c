inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 34, 9 }));
  set_short( "Corridor - x7y34z9" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y34z9.c",
  "north" : DIR+"/rooms/x7y35z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
