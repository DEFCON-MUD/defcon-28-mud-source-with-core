inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 36, 8 }));
  set_short( "Corridor - x4y36z8" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y36z8.c",
  "east" : DIR+"/rooms/x5y36z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
