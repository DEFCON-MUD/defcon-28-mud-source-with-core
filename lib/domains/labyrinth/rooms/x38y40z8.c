inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 40, 8 }));
  set_short( "Passage - x38y40z8" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y40z8.c",
  "east" : DIR+"/rooms/x39y40z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
