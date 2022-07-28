inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 32, 9 }));
  set_short( "Hallway - x6y32z9" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y32z9.c",
  "east" : DIR+"/rooms/x7y32z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
