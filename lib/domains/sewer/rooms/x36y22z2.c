inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 22, 2 }));
  set_short( "Hallway - x36y22z2" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y22z2.c",
  "east" : DIR+"/rooms/x37y22z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
