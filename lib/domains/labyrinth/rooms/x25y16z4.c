inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 16, 4 }));
  set_short( "Passage - x25y16z4" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y16z4.c",
  "east" : DIR+"/rooms/x26y16z4.c",
  "south" : DIR+"/rooms/x25y15z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
