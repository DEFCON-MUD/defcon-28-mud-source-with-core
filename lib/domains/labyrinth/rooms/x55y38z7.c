inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 38, 7 }));
  set_short( "Passage - x55y38z7" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y38z7.c",
  "south" : DIR+"/rooms/x55y37z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
