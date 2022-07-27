inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 19, 2 }));
  set_short( "Passage - x37y19z2" );
set_objects( DIR+"/monsters/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y20z2.c",
  "south" : DIR+"/rooms/x37y18z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
