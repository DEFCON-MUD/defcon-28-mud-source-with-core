inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 38, 5 }));
  set_short( "Hallway - x38y38z5" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y38z5.c",
  "east" : DIR+"/rooms/x39y38z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
