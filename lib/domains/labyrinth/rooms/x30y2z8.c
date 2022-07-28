inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 2, 8 }));
  set_short( "Corridor - x30y2z8" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y2z8.c",
  "east" : DIR+"/rooms/x31y2z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
