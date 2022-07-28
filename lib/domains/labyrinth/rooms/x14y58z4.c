inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 58, 4 }));
  set_short( "Passage - x14y58z4" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y58z4.c",
  "east" : DIR+"/rooms/x15y58z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
