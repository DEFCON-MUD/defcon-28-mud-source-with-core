inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 62, 4 }));
  set_short( "Passage - x10y62z4" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y62z4.c",
  "east" : DIR+"/rooms/x11y62z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
