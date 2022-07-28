inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 7 }));
  set_short( "Passage - x25y50z7" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y50z7.c",
  "south" : DIR+"/rooms/x25y49z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
