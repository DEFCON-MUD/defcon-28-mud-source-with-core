inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 56, 9 }));
  set_short( "Passage - x27y56z9" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y56z9.c",
  "east" : DIR+"/rooms/x28y56z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
