inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 8, 9 }));
  set_short( "Passage - x3y8z9" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y8z9.c",
  "south" : DIR+"/rooms/x3y7z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
