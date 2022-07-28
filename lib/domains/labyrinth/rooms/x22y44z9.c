inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 44, 9 }));
  set_short( "Corridor - x22y44z9" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y44z9.c",
  "east" : DIR+"/rooms/x23y44z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
