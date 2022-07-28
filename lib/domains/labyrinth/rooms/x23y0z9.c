inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 0, 9 }));
  set_short( "Hallway - x23y0z9" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y0z9.c",
  "east" : DIR+"/rooms/x24y0z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
