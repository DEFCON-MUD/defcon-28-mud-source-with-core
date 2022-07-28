inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 57, 8 }));
  set_short( "Passage - x47y57z8" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y58z8.c",
  "south" : DIR+"/rooms/x47y56z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
