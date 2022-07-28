inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 8 }));
  set_short( "Hallway - x11y38z8" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y38z8.c",
  "south" : DIR+"/rooms/x11y37z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
