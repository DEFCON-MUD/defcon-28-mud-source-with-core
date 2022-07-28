inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 54, 7 }));
  set_short( "Passage - x39y54z7" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y54z7.c",
  "north" : DIR+"/rooms/x39y55z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
