inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 50, 2 }));
  set_short( "Passage - x48y50z2" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y50z2.c",
  "east" : DIR+"/rooms/x49y50z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
