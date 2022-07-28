inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 64, 2 }));
  set_short( "Corridor - x49y64z2" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y64z2.c",
  "east" : DIR+"/rooms/x50y64z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
