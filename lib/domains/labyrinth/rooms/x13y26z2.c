inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 26, 2 }));
  set_short( "Passage - x13y26z2" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y26z2.c",
  "south" : DIR+"/rooms/x13y25z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
