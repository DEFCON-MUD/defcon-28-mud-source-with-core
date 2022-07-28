inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 42, 4 }));
  set_short( "Passage - x24y42z4" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y42z4.c",
  "east" : DIR+"/rooms/x25y42z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
