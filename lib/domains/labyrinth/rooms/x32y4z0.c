inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 4, 0 }));
  set_short( "Passage - x32y4z0" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y4z0.c",
  "east" : DIR+"/rooms/x33y4z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
