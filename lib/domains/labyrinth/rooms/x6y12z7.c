inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 12, 7 }));
  set_short( "Corridor - x6y12z7" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y12z7.c",
  "east" : DIR+"/rooms/x7y12z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
