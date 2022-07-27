inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 1 }));
  set_short( "Corridor - x45y10z1" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y10z1.c",
  "north" : DIR+"/rooms/x45y11z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
