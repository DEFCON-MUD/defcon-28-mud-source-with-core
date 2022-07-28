inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 64, 4 }));
  set_short( "Hallway - x9y64z4" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y64z4.c",
  "east" : DIR+"/rooms/x10y64z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
