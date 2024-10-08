inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 2, 4 }));
  set_short( "Corridor - x38y2z4" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y2z4.c",
  "east" : DIR+"/rooms/x39y2z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
