inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 31, 8 }));
  set_short( "Passage - x11y31z8" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y32z8.c",
  "south" : DIR+"/rooms/x11y30z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
