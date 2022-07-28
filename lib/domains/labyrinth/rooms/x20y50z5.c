inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 50, 5 }));
  set_short( "Passage - x20y50z5" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y50z5.c",
  "east" : DIR+"/rooms/x21y50z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
