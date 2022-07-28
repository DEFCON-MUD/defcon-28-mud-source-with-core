inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 44, 5 }));
  set_short( "Corridor - x33y44z5" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y45z5.c",
  "south" : DIR+"/rooms/x33y43z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
