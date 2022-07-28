inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 24, 6 }));
  set_short( "Hallway - x31y24z6" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y24z6.c",
  "east" : DIR+"/rooms/x32y24z6.c",
  "south" : DIR+"/rooms/x31y23z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
