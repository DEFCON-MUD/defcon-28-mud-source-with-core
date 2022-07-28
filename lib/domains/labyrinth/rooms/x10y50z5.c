inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 50, 5 }));
  set_short( "Passage - x10y50z5" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y50z5.c",
  "east" : DIR+"/rooms/x11y50z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
