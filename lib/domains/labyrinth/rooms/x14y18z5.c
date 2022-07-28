inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 18, 5 }));
  set_short( "Hallway - x14y18z5" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y18z5.c",
  "east" : DIR+"/rooms/x15y18z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
