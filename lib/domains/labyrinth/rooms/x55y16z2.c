inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 16, 2 }));
  set_short( "Corridor - x55y16z2" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y16z2.c",
  "east" : DIR+"/rooms/x56y16z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
