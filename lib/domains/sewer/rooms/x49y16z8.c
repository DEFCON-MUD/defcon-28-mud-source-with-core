inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 16, 8 }));
  set_short( "Corridor - x49y16z8" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y17z8.c",
  "south" : DIR+"/rooms/x49y15z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
